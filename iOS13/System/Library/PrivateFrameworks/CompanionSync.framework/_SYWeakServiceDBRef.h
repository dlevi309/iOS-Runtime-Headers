/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@class NSString, _SYSharedServiceDB;

@interface _SYWeakServiceDBRef : NSObject {

	NSString* _name;
	_SYSharedServiceDB* _db;

}

@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) _SYSharedServiceDB * db;              //@synthesize db=_db - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(_SYSharedServiceDB *)db;
-(void)setDb:(_SYSharedServiceDB *)arg1 ;
@end

