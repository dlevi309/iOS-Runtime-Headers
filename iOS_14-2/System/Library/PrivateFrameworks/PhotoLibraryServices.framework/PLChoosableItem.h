/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString;

@interface PLChoosableItem : NSObject {

	int _type;
	long long _width;
	long long _height;
	NSString* _uniformTypeIdentifier;

}

@property (nonatomic,readonly) long long width;                               //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) long long height;                              //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) int type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * uniformTypeIdentifier;              //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
+(id)choosableItemsFromCloudResources:(id)arg1 ;
-(long long)width;
-(id)initWithWidth:(long long)arg1 height:(long long)arg2 type:(int)arg3 uniformTypeIdentifier:(id)arg4 ;
-(BOOL)isEqualToChoosableItem:(id)arg1 ;
-(long long)compareUsingWidth:(id)arg1 ;
-(NSString *)uniformTypeIdentifier;
-(long long)height;
-(id)description;
-(int)type;
-(unsigned long long)hash;
-(id)initWithCloudResource:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

