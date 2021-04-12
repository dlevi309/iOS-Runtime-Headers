/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CRVectorTimestampElement : NSObject <NSSecureCoding> {

	unsigned long long _clock;
	unsigned long long _subclock;

}

@property (assign,nonatomic) unsigned long long clock;                 //@synthesize clock=_clock - In the implementation block
@property (assign,nonatomic) unsigned long long subclock;              //@synthesize subclock=_subclock - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)clock;
-(void)setClock:(unsigned long long)arg1 ;
-(unsigned long long)subclock;
-(void)setSubclock:(unsigned long long)arg1 ;
-(long long)rem_compareToVectorTimestampElement:(id)arg1 ;
@end

