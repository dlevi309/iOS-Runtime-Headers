/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _TIKeyboardSecureCandidate : NSObject <NSCopying> {

	NSString* _secureHeader;
	NSString* _secureContent;
	NSString* _secureFormattedContent;
	NSString* _input;
	NSString* _truncationSentinel;

}

@property (nonatomic,readonly) NSString * secureHeader;                        //@synthesize secureHeader=_secureHeader - In the implementation block
@property (nonatomic,readonly) NSString * secureContent;                       //@synthesize secureContent=_secureContent - In the implementation block
@property (nonatomic,readonly) NSString * secureFormattedContent;              //@synthesize secureFormattedContent=_secureFormattedContent - In the implementation block
@property (nonatomic,readonly) NSString * input;                               //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) NSString * truncationSentinel;                  //@synthesize truncationSentinel=_truncationSentinel - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)input;
-(id)initWithSecureHeader:(id)arg1 secureContent:(id)arg2 secureFormattedContent:(id)arg3 input:(id)arg4 truncationSentinel:(id)arg5 ;
-(NSString *)secureHeader;
-(NSString *)secureContent;
-(NSString *)secureFormattedContent;
-(NSString *)truncationSentinel;
@end

