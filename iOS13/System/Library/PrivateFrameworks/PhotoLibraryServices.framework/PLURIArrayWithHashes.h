/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableArray;

@interface PLURIArrayWithHashes : NSObject {

	CFArrayRef _uris;
	CFArrayRef _hashes;
	NSMutableArray* _attributeValues;
	NSMutableArray* _relationshipValues;

}

@property (assign,nonatomic) CFArrayRef uris;                                  //@synthesize uris=_uris - In the implementation block
@property (assign,nonatomic) CFArrayRef hashes;                                //@synthesize hashes=_hashes - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributeValues;                 //@synthesize attributeValues=_attributeValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * relationshipValues;              //@synthesize relationshipValues=_relationshipValues - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) BOOL isUpdate; 
-(id)init;
-(id)description;
-(unsigned long long)count;
-(NSMutableArray *)attributeValues;
-(BOOL)isUpdate;
-(id)initForUpdates:(BOOL)arg1 ;
-(CFArrayRef)uris;
-(void)setUris:(CFArrayRef)arg1 ;
-(CFArrayRef)hashes;
-(void)setHashes:(CFArrayRef)arg1 ;
-(void)setAttributeValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)relationshipValues;
-(void)setRelationshipValues:(NSMutableArray *)arg1 ;
@end

