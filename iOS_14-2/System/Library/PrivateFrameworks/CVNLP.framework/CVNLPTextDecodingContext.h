/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/


#import <CVNLP/CVNLP-Structs.h>
@class NSString;

@interface CVNLPTextDecodingContext : NSObject {

	NSString* _history;
	NSRange _activeRange;

}

@property (nonatomic,readonly) NSString * history;               //@synthesize history=_history - In the implementation block
@property (nonatomic,readonly) NSRange activeRange;              //@synthesize activeRange=_activeRange - In the implementation block
-(NSString *)history;
-(id)initWithHistory:(id)arg1 ;
-(id)inactiveSubstring;
-(id)activeSubstring;
-(id)initWithHistory:(id)arg1 activeRange:(NSRange)arg2 ;
-(NSRange)activeRange;
@end

