/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NUErrorMessage : NSObject <NSCopying> {

	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,copy,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
-(NSString *)subtitle;
-(unsigned long long)hash;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

