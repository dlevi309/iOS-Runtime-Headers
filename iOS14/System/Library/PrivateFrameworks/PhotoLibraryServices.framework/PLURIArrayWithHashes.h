/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isUpdate;
-(CFArrayRef)uris;
-(id)init;
-(void)setUris:(CFArrayRef)arg1 ;
-(id)initForUpdates:(BOOL)arg1 ;
-(void)setHashes:(CFArrayRef)arg1 ;
-(void)setAttributeValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)relationshipValues;
-(void)setRelationshipValues:(NSMutableArray *)arg1 ;
-(unsigned long long)count;
-(id)description;
-(CFArrayRef)hashes;
-(NSMutableArray *)attributeValues;
@end

