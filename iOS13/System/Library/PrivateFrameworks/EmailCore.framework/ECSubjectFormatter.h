/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class _ECSubjectFormatterContext, NSString;

@interface ECSubjectFormatter : NSFormatter <EFLoggable> {

	long long _style;
	_ECSubjectFormatterContext* _replyContext;
	_ECSubjectFormatterContext* _forwardContext;

}

@property (assign,nonatomic) long long style;                                          //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) _ECSubjectFormatterContext * replyContext;                //@synthesize replyContext=_replyContext - In the implementation block
@property (nonatomic,retain) _ECSubjectFormatterContext * forwardContext;              //@synthesize forwardContext=_forwardContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)subjectStringForDisplayForSubjectString:(id)arg1 ;
+(id)nonLocalizedReplyPrefix;
+(id)nonLocalizedForwardPrefix;
+(id)subjectStringForDisplayForSubjectString:(id)arg1 style:(long long)arg2 ;
+(id)_subjectStringForDisplayForObject:(id)arg1 style:(long long)arg2 ;
+(id)subjectStringForDisplayForSubject:(id)arg1 style:(long long)arg2 ;
+(id)subjectStringForDisplayForMessage:(id)arg1 style:(long long)arg2 ;
+(id)localizedReplyPrefix;
+(id)localizedForwardPrefix;
+(id)subjectStringForDisplayForSubject:(id)arg1 ;
+(id)subjectStringForDisplayForMessage:(id)arg1 ;
-(id)init;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(id)_localizedPrefixForSubjectFromSubject:(id)arg1 ;
-(_ECSubjectFormatterContext *)replyContext;
-(_ECSubjectFormatterContext *)forwardContext;
-(void)setReplyContext:(_ECSubjectFormatterContext *)arg1 ;
-(void)setForwardContext:(_ECSubjectFormatterContext *)arg1 ;
@end

