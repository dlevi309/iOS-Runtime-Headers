/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(NSString *)backingStore;
-(unsigned long long)length;
-(NSString *)localizedValue;
-(void)setLocalizedValue:(NSString *)arg1 ;
-(void)setBackingStore:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

