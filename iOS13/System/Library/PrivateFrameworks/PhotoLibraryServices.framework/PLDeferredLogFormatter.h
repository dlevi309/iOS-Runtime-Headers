/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableArray;

@interface PLDeferredLogFormatter : NSObject {

	NSMutableArray* _entries;

}
+(id)_serializableDictionaryForEntry:(id)arg1 ;
+(id)_entityDescriptionForContext:(long long)arg1 ;
+(id)_logTypeForContext:(long long)arg1 ;
+(BOOL)_isManagedObjectPointerForContext:(long long)arg1 ;
-(id)init;
-(id)stringWithFormat:(long long)arg1 ;
-(void)clear;
-(void)addLogWithContext:(long long)arg1 timestamp:(double)arg2 pointer:(unsigned long long)arg3 ;
-(id)_formattedStringForPrinting;
-(id)_JSONStringPretty:(BOOL)arg1 ;
-(id)_plistString;
@end

