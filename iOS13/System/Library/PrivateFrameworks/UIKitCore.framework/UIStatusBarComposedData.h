/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UISystemNavigationAction;

@interface UIStatusBarComposedData : NSObject <NSCopying> {

	SCD_Struct_UI110 _rawData;
	BOOL _itemEnabled[48];
	NSString* _doubleHeightStatus;
	UISystemNavigationAction* _systemNavigationItem;

}

@property (nonatomic,readonly) SCD_Struct_UI110* rawData; 
@property (nonatomic,copy) NSString * doubleHeightStatus;                                  //@synthesize doubleHeightStatus=_doubleHeightStatus - In the implementation block
@property (nonatomic,retain) UISystemNavigationAction * systemNavigationItem;              //@synthesize systemNavigationItem=_systemNavigationItem - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_UI110*)rawData;
-(NSString *)doubleHeightStatus;
-(UISystemNavigationAction *)systemNavigationItem;
-(id)initWithRawData:(const SCD_Struct_UI110*)arg1 ;
-(void)setSystemNavigationItem:(UISystemNavigationAction *)arg1 ;
-(void)setDoubleHeightStatus:(NSString *)arg1 ;
-(void)setItem:(int)arg1 enabled:(BOOL)arg2 ;
-(BOOL)isItemEnabled:(int)arg1 ;
@end

