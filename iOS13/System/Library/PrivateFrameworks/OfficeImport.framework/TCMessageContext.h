/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSMutableArray, NSMutableDictionary, NSObject;

@interface TCMessageContext : NSObject {

	NSMutableSet* m_warnings;
	NSMutableSet* m_errors;
	NSMutableArray* m_affectedObjectStack;
	NSMutableDictionary* m_placeholderToObjectMap;
	NSObject*<OS_dispatch_queue> mMessageSyncQueue;

}
+(void)initialize;
+(void)reportError:(id)arg1 ;
+(id)currentObjectOrPlaceholder;
+(void)reportObjectOrPlaceholder:(id)arg1 withWarning:(id)arg2 parameters:(char*)arg3 ;
+(void)pushAffectedObject:(id)arg1 ;
+(void)popAffectedObject;
+(void)pushAffectedObjectPlaceholder;
+(void)popAffectedObjectPlaceholder:(id)arg1 ;
+(unsigned long long)saveAffectedObjectStack;
+(void)restoreAffectedObjectStack:(unsigned long long)arg1 ;
+(void)reportWarningsToDelegate;
+(void)reportObject:(id)arg1 withWarning:(id)arg2 ;
+(void)reportWarning:(id)arg1 ;
+(void)reportWarningException:(id)arg1 ;
+(void)reportErrorException:(id)arg1 ;
+(void)createContextForCurrentThread;
+(void)removeContextForCurrentThread;
+(id)getWarningArray;
+(id)getErrorArray;
+(unsigned long long)getErrorCount;
+(void)setIsFileStructuredStorage:(BOOL)arg1 ;
+(BOOL)isFileStructuredStorage;
-(id)init;
-(void)dealloc;
-(void)reportWarningForObject:(id)arg1 warning:(id)arg2 parameterList:(char*)arg3 ;
-(id)currentObjectOrPlaceholder;
-(void)addErrorMessageEntry:(id)arg1 ;
-(void)addWarningMessageEntry:(id)arg1 ;
-(void)pushAffectedObject:(id)arg1 ;
-(void)popAffectedObject;
-(void)pushAffectedObjectPlaceholder;
-(void)popAffectedObjectPlaceholder:(id)arg1 ;
-(unsigned long long)saveAffectedObjectStack;
-(void)restoreAffectedObjectStack:(unsigned long long)arg1 ;
-(void)reportWarningsToDelegate;
-(void)setAffectedObject:(id)arg1 forPlaceholderWithKey:(id)arg2 ;
-(void)resolveObjectOfCurrentAffectedObjectPlaceholder;
-(void)replacePlaceholdersWithObjects;
@end

