/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/MobileSoftwareUpdate
*/


@class NSDictionary;

@interface MSUUpdateBrainLoader : NSObject {

	NSDictionary* _attributesDict;

}

@property (retain) NSDictionary * attributesDict;              //@synthesize attributesDict=_attributesDict - In the implementation block
-(BOOL)cancel:(id*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)dealloc;
-(void)loadUpdateBrainWithOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(void)adjustOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)requiredDiskSpace:(id*)arg1 ;
-(NSDictionary *)attributesDict;
-(void)setAttributesDict:(NSDictionary *)arg1 ;
@end

