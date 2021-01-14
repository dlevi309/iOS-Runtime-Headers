/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <libobjc.A.dylib/ICStateHandlerProvider.h>

@class NSString;

@interface ICDatabaseStateHandler : NSObject <ICStateHandlerProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerStateHandler;
+(id)stateDictionary;
+(id)modernDatabaseState;
+(id)miscState;
+(id)stateDictionaryFromLoggables:(id)arg1 ;
@end

