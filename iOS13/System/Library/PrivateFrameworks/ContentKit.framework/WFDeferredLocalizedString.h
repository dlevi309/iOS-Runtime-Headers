/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface WFDeferredLocalizedString : NSString {

	NSString* _localizedValue;
	NSString* _backingStore;

}

@property (nonatomic,copy) NSString * backingStore;                //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,copy) NSString * localizedValue;              //@synthesize localizedValue=_localizedValue - In the implementation block
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(NSString *)backingStore;
-(NSString *)localizedValue;
-(void)setLocalizedValue:(NSString *)arg1 ;
-(void)setBackingStore:(NSString *)arg1 ;
@end

