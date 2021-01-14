/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <QuickLookThumbnailing/QLCacheVersionedFileIdentifier.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class QLCacheFileProviderFileIdentifier;

@interface QLCacheFileProviderVersionedFileIdentifier : QLCacheVersionedFileIdentifier <NSSecureCoding>

@property (readonly) QLCacheFileProviderFileIdentifier * fileIdentifier; 
-(sqlite3_stmtRef)statementToInsertIntoDatabase:(id)arg1 ;
-(sqlite3_stmtRef)statementToUpdateRecordWithCacheIdentifier:(unsigned long long)arg1 inDatabase:(id)arg2 ;
-(id)initWithSteppedStatement:(sqlite3_stmtRef)arg1 database:(id)arg2 ;
-(id)initWithFileIdentifier:(id)arg1 version:(id)arg2 ;
-(id)initWithThumbnailRequest:(id)arg1 ;
@end

