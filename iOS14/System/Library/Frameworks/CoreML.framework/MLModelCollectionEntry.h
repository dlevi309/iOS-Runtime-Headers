/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@class NSString, NSURL;

@interface MLModelCollectionEntry : NSObject {

	NSString* _modelIdentifier;
	NSURL* _modelURL;

}

@property (nonatomic,readonly) NSString * modelIdentifier;              //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * modelURL;                        //@synthesize modelURL=_modelURL - In the implementation block
+(id)entryWithModelIdentifier:(id)arg1 modelURL:(id)arg2 ;
-(NSURL *)modelURL;
-(BOOL)isEqualToModelCollectionEntry:(id)arg1 ;
-(id)_initWithModelIdentifier:(id)arg1 modelUrl:(id)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)modelIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

