/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSSet, NSDictionary;

@interface VUIMediaCategory : NSObject {

	unsigned long long _type;
	NSSet* _supportedMediaCollectionTypes;
	NSDictionary* _supportedChildMediaCollectionTypes;

}

@property (assign,nonatomic) unsigned long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSSet * supportedMediaCollectionTypes;                          //@synthesize supportedMediaCollectionTypes=_supportedMediaCollectionTypes - In the implementation block
@property (nonatomic,copy) NSDictionary * supportedChildMediaCollectionTypes;              //@synthesize supportedChildMediaCollectionTypes=_supportedChildMediaCollectionTypes - In the implementation block
+(id)mediaCatgeoryForType:(unsigned long long)arg1 ;
-(id)_initWithType:(unsigned long long)arg1 ;
-(id)init;
-(void)setType:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)type;
-(NSSet *)supportedMediaCollectionTypes;
-(void)setSupportedMediaCollectionTypes:(NSSet *)arg1 ;
-(void)setSupportedChildMediaCollectionTypes:(NSDictionary *)arg1 ;
-(NSDictionary *)supportedChildMediaCollectionTypes;
@end

