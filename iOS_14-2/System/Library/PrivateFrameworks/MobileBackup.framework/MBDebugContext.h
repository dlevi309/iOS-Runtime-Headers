/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/


@class NSMutableDictionary, NSDate;

@interface MBDebugContext : NSObject {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) long long time; 
@property (nonatomic,retain) NSDate * simulatedDate; 
+(id)defaultDebugContext;
-(long long)time;
-(BOOL)eval:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setFlag:(id)arg1 ;
-(int)intForName:(id)arg1 ;
-(BOOL)isFlagSet:(id)arg1 ;
-(BOOL)boolForName:(id)arg1 ;
-(id)valueForName:(id)arg1 ;
-(void)dealloc;
-(NSDate *)simulatedDate;
-(void)setValue:(id)arg1 forName:(id)arg2 ;
-(void)removeValueForName:(id)arg1 ;
-(void)setSimulatedDate:(NSDate *)arg1 ;
-(void)setBool:(BOOL)arg1 forName:(id)arg2 ;
-(void)setInt:(int)arg1 forName:(id)arg2 ;
-(void)setDelegate:(id)arg1 andSelector:(SEL)arg2 forName:(id)arg3 ;
-(id)performSelectorForName:(id)arg1 ;
-(id)performSelectorForName:(id)arg1 withObject:(id)arg2 ;
@end

