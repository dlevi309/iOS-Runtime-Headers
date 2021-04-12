/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/


@class NSMutableDictionary, NSDate;

@interface MBDebugContext : NSObject {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) long long time; 
@property (nonatomic,retain) NSDate * simulatedDate; 
+(id)defaultDebugContext;
-(id)init;
-(void)dealloc;
-(id)description;
-(long long)time;
-(void)setFlag:(id)arg1 ;
-(NSDate *)simulatedDate;
-(id)valueForName:(id)arg1 ;
-(void)setValue:(id)arg1 forName:(id)arg2 ;
-(void)removeValueForName:(id)arg1 ;
-(void)setSimulatedDate:(NSDate *)arg1 ;
-(BOOL)isFlagSet:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forName:(id)arg2 ;
-(BOOL)boolForName:(id)arg1 ;
-(void)setInt:(int)arg1 forName:(id)arg2 ;
-(int)intForName:(id)arg1 ;
-(void)setDelegate:(id)arg1 andSelector:(SEL)arg2 forName:(id)arg3 ;
-(id)performSelectorForName:(id)arg1 ;
-(id)performSelectorForName:(id)arg1 withObject:(id)arg2 ;
-(BOOL)eval:(id)arg1 ;
@end

