/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/


@class NSArray;

@interface MFIMAPConnectionFlagSearchRequest : NSObject {

	BOOL _isPositiveMatch;
	unsigned long long _mask;
	NSArray* _searchTerms;

}

@property (nonatomic,readonly) unsigned long long mask;              //@synthesize mask=_mask - In the implementation block
@property (nonatomic,readonly) NSArray * searchTerms;                //@synthesize searchTerms=_searchTerms - In the implementation block
@property (nonatomic,readonly) BOOL isPositiveMatch;                 //@synthesize isPositiveMatch=_isPositiveMatch - In the implementation block
+(id)requestWithMask:(unsigned long long)arg1 searchTerms:(id)arg2 positiveMatch:(BOOL)arg3 ;
-(unsigned long long)mask;
-(NSArray *)searchTerms;
-(BOOL)isPositiveMatch;
-(id)initWithMask:(unsigned long long)arg1 searchTerms:(id)arg2 positiveMatch:(BOOL)arg3 ;
@end

