/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface IPAEditOperation : NSObject <NSObject, NSCopying> {

	NSUUID* _UUID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)presetifyAdjustment:(id)arg1 ;
-(id)initWithOperation:(id)arg1 ;
-(id)UUID;
-(id)init;
-(NSString *)debugDescription;
-(id)settingsDictionary;
-(NSString *)description;
-(id)autoIdentifier;
-(id)identifier;
-(void)setUUID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)archivalRepresentation;
-(id)initWithSettingsDictionary:(id)arg1 ;
-(BOOL)isEqualToOperation:(id)arg1 ;
@end

