/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)clear;
-(id)stringWithFormat:(long long)arg1 ;
-(id)init;
-(void)addLogWithContext:(long long)arg1 timestamp:(double)arg2 pointer:(unsigned long long)arg3 ;
-(id)_formattedStringForPrinting;
-(id)_JSONStringPretty:(BOOL)arg1 ;
-(id)_plistString;
@end

