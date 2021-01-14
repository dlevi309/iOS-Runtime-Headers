/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UISystemNavigationAction;

@interface UIStatusBarComposedData : NSObject <NSCopying> {

	SCD_Struct_UI121 _rawData;
	BOOL _itemEnabled[49];
	NSString* _doubleHeightStatus;
	UISystemNavigationAction* _systemNavigationItem;

}

@property (nonatomic,readonly) SCD_Struct_UI121* rawData; 
@property (nonatomic,copy) NSString * doubleHeightStatus;                                  //@synthesize doubleHeightStatus=_doubleHeightStatus - In the implementation block
@property (nonatomic,retain) UISystemNavigationAction * systemNavigationItem;              //@synthesize systemNavigationItem=_systemNavigationItem - In the implementation block
-(SCD_Struct_UI121*)rawData;
-(id)description;
-(id)initWithRawData:(const SCD_Struct_UI121*)arg1 ;
-(void)setSystemNavigationItem:(UISystemNavigationAction *)arg1 ;
-(void)setDoubleHeightStatus:(NSString *)arg1 ;
-(void)setItem:(int)arg1 enabled:(BOOL)arg2 ;
-(BOOL)isItemEnabled:(int)arg1 ;
-(NSString *)doubleHeightStatus;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UISystemNavigationAction *)systemNavigationItem;
-(BOOL)isEqual:(id)arg1 ;
@end

