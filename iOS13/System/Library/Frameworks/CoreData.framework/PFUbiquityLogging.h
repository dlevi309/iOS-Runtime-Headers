/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@interface PFUbiquityLogging : NSObject {

	int _desiredLogLevel;

}

@property (assign,nonatomic) int desiredLogLevel;              //@synthesize desiredLogLevel=_desiredLogLevel - In the implementation block
+(void)initialize;
+(BOOL)canLogMessageAtLevel:(int)arg1 ;
+(void)setLoggingLevel:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(void)userDefaultsChanged:(id)arg1 ;
-(void)checkUserDefaults;
-(void)setDesiredLogLevel:(int)arg1 ;
-(int)desiredLogLevel;
@end

