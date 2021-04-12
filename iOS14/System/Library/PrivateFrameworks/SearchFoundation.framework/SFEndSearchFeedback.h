/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFEndSearchFeedback : SFFeedback {

	BOOL _isCanceled;
	NSString* _uuid;
	unsigned long long _cancelSearchEvent;

}

@property (nonatomic,copy) NSString * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL isCanceled;                                   //@synthesize isCanceled=_isCanceled - In the implementation block
@property (assign,nonatomic) unsigned long long cancelSearchEvent;              //@synthesize cancelSearchEvent=_cancelSearchEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)uuid;
-(BOOL)isCanceled;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCancelSearchEvent:(unsigned long long)arg1 ;
-(unsigned long long)cancelSearchEvent;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStartSearch:(id)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(void)setIsCanceled:(BOOL)arg1 ;
@end

