/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)completeID:(unsigned long long)arg1 success:(BOOL)arg2 ;
-(unsigned long long)addCompletion:(id)arg1 ;
-(void)setLastID:(unsigned long long)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(NSMutableArray *)pendingCompletions;
-(void)setName:(NSString *)arg1 ;
-(void)setPendingCompletions:(NSMutableArray *)arg1 ;
-(unsigned long long)lastID;
@end

