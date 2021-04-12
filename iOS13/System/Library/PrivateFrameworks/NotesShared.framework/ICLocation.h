/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <CoreData/NSManagedObject.h>

@class CLPlacemark, NSString, NSData;

@interface ICLocation : NSManagedObject {

	BOOL updatingPlace;
	CLPlacemark* _placemark;

}

@property (assign,nonatomic) BOOL updatingPlace; 
@property (nonatomic,readonly) NSString * formattedAddress; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (nonatomic,retain) NSData * placemarkData; 
@property (nonatomic,retain) CLPlacemark * placemark;                    //@synthesize placemark=_placemark - In the implementation block
+(id)searchStringsForPlacemark:(id)arg1 ;
-(CLPlacemark *)placemark;
-(void)didTurnIntoFault;
-(NSString *)formattedAddress;
-(void)setPlacemark:(CLPlacemark *)arg1 ;
-(void)setLocationFromPlacemark:(id)arg1 ;
-(void)setLocationFromURL:(id)arg1 ;
-(id)searchStrings;
-(BOOL)updatingPlace;
-(void)setUpdatingPlace:(BOOL)arg1 ;
@end

