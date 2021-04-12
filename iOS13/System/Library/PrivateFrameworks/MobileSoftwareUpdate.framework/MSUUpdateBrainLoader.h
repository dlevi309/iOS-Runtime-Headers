/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/MobileSoftwareUpdate
*/


@class NSDictionary;

@interface MSUUpdateBrainLoader : NSObject {

	NSDictionary* _attributesDict;

}

@property (retain) NSDictionary * attributesDict;              //@synthesize attributesDict=_attributesDict - In the implementation block
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)cancel:(id*)arg1 ;
-(void)loadUpdateBrainWithOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(void)adjustOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)requiredDiskSpace:(id*)arg1 ;
-(NSDictionary *)attributesDict;
-(void)setAttributesDict:(NSDictionary *)arg1 ;
@end

