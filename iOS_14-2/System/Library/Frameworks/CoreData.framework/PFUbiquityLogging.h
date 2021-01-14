/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@interface PFUbiquityLogging : NSObject {

	int _desiredLogLevel;

}

@property (assign,nonatomic) int desiredLogLevel;              //@synthesize desiredLogLevel=_desiredLogLevel - In the implementation block
+(void)initialize;
+(void)setLoggingLevel:(int)arg1 ;
+(BOOL)canLogMessageAtLevel:(int)arg1 ;
-(id)init;
-(void)userDefaultsChanged:(id)arg1 ;
-(void)checkUserDefaults;
-(void)setDesiredLogLevel:(int)arg1 ;
-(int)desiredLogLevel;
-(void)dealloc;
@end

