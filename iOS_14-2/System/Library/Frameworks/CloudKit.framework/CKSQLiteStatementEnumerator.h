/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CoreFoundation/NSEnumerator.h>

@class CKSQLiteStatement;

@interface CKSQLiteStatementEnumerator : NSEnumerator {

	BOOL _closed;
	CKSQLiteStatement* _statement;
	/*^block*/id _block;

}

@property (nonatomic,retain) CKSQLiteStatement * statement;              //@synthesize statement=_statement - In the implementation block
@property (nonatomic,copy) id block;                                     //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) BOOL closed;                                //@synthesize closed=_closed - In the implementation block
-(id)nextObject;
-(CKSQLiteStatement *)statement;
-(BOOL)closed;
-(id)block;
-(void)close;
-(void)setClosed:(BOOL)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)initWithStatement:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setStatement:(CKSQLiteStatement *)arg1 ;
-(void)dealloc;
@end

