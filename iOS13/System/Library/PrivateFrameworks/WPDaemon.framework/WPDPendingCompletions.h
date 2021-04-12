/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/


@class NSMutableArray, NSString;

@interface WPDPendingCompletions : NSObject {

	NSMutableArray* _pendingCompletions;
	unsigned long long _lastID;
	NSString* _name;

}

@property (retain) NSMutableArray * pendingCompletions;              //@synthesize pendingCompletions=_pendingCompletions - In the implementation block
@property (assign) unsigned long long lastID;                        //@synthesize lastID=_lastID - In the implementation block
@property (retain) NSString * name;                                  //@synthesize name=_name - In the implementation block
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(unsigned long long)addCompletion:(id)arg1 ;
-(unsigned long long)lastID;
-(NSMutableArray *)pendingCompletions;
-(void)setLastID:(unsigned long long)arg1 ;
-(void)completeID:(unsigned long long)arg1 success:(BOOL)arg2 ;
-(void)setPendingCompletions:(NSMutableArray *)arg1 ;
@end

