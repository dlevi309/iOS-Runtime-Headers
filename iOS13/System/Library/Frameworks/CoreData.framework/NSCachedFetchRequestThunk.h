/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSSQLiteStatement;

@interface NSCachedFetchRequestThunk : NSObject {

	NSSQLiteStatement* _limitedStatement;
	NSSQLiteStatement* _unlimitedStatement;
	id _connection;

}

@property (nonatomic,retain) NSSQLiteStatement * limitedStatement;                //@synthesize limitedStatement=_limitedStatement - In the implementation block
@property (nonatomic,retain) NSSQLiteStatement * unlimitedStatement;              //@synthesize unlimitedStatement=_unlimitedStatement - In the implementation block
-(void)dealloc;
-(void)clearCaches;
-(id)initForConnection:(id)arg1 ;
-(NSSQLiteStatement *)limitedStatement;
-(NSSQLiteStatement *)unlimitedStatement;
-(void)setLimitedStatement:(NSSQLiteStatement *)arg1 ;
-(void)setUnlimitedStatement:(NSSQLiteStatement *)arg1 ;
@end

