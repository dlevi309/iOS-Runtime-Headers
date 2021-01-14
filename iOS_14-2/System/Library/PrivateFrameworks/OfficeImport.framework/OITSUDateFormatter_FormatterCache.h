/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSLock, NSMutableDictionary;

@interface OITSUDateFormatter_FormatterCache : NSObject {

	NSLock* _dateFormatterCacheLock;
	NSMutableDictionary* _dateFormatterCache;

}
+(id)dateFormatterStringFromDate:(id)arg1 withFormat:(id)arg2 locale:(id)arg3 ;
-(id)init;
-(id)dateFormatterStringFromDate:(id)arg1 withFormat:(id)arg2 locale:(id)arg3 ;
@end

