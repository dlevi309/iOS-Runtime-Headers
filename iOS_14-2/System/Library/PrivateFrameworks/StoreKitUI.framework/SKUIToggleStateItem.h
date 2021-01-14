/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SKUIToggleStateItem : NSObject <NSCopying> {

	char _toggled;
	long long _count;
	NSString* _itemIdentifier;
	NSString* _nonToggledString;
	NSString* _toggledString;

}

@property (assign,nonatomic) long long count;                       //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSString * itemIdentifier;               //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) char toggled;                          //@synthesize toggled=_toggled - In the implementation block
@property (nonatomic,copy) NSString * nonToggleString;              //@synthesize nonToggledString=_nonToggledString - In the implementation block
@property (nonatomic,copy) NSString * toggledString;                //@synthesize toggledString=_toggledString - In the implementation block
-(void)setCount:(long long)arg1 ;
-(NSString *)itemIdentifier;
-(long long)count;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(char)toggled;
-(void)setToggled:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)toggledString;
-(void)setToggledString:(NSString *)arg1 ;
-(NSString *)nonToggleString;
-(void)setNonToggleString:(NSString *)arg1 ;
@end

