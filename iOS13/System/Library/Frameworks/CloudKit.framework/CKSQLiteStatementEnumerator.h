/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)nextObject;
-(void)close;
-(id)block;
-(BOOL)closed;
-(void)setBlock:(id)arg1 ;
-(CKSQLiteStatement *)statement;
-(void)setStatement:(CKSQLiteStatement *)arg1 ;
-(void)setClosed:(BOOL)arg1 ;
-(id)initWithStatement:(id)arg1 block:(/*^block*/id)arg2 ;
@end

