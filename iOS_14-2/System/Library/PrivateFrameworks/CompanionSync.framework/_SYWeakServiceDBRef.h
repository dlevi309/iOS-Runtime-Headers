/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@class NSString, _SYSharedServiceDB;

@interface _SYWeakServiceDBRef : NSObject {

	NSString* _name;
	_SYSharedServiceDB* _db;

}

@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) _SYSharedServiceDB * db;              //@synthesize db=_db - In the implementation block
-(_SYSharedServiceDB *)db;
-(id)initWithServiceName:(id)arg1 ;
-(NSString *)name;
-(void)setDb:(_SYSharedServiceDB *)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

