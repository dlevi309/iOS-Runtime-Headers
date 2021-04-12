/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSString, NSDictionary;

@interface PUSearchZeroKeywordBaseViewModel : NSObject {

	long long _itemType;
	NSString* _title;
	id _representedObject;
	id _displayInfo;

}

@property (nonatomic,readonly) long long itemType;                          //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) id representedObject;                        //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,readonly) id displayInfo;                              //@synthesize displayInfo=_displayInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * debugDictionary; 
-(id)initForTesting;
-(id)description;
-(long long)itemType;
-(NSDictionary *)debugDictionary;
-(id)displayInfo;
-(id)initWithType:(long long)arg1 title:(id)arg2 representedObject:(id)arg3 displayInfo:(id)arg4 ;
-(NSString *)title;
-(id)representedObject;
@end

