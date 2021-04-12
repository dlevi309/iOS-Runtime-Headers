/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)type;
-(long long)width;
-(long long)height;
-(NSString *)uniformTypeIdentifier;
-(id)initWithCloudResource:(id)arg1 ;
-(id)initWithWidth:(long long)arg1 height:(long long)arg2 type:(int)arg3 uniformTypeIdentifier:(id)arg4 ;
-(BOOL)isEqualToChoosableItem:(id)arg1 ;
-(long long)compareUsingWidth:(id)arg1 ;
@end

