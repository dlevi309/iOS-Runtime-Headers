/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSMutableSet;

@interface _OSLogCatalogFilter : NSObject <NSPredicateVisitor> {

	NSMutableSet* _pidAccept;
	NSMutableSet* _processLookupSubstr;
	NSMutableSet* _senderLookupSubstr;
	NSMutableSet* _subsysSubstrAccept;
	NSMutableSet* _uuidAccept;
	char* _uuidtext_path;
	BOOL _hasItems;
	BOOL _hasSharedCacheItems;

}
-(void)addProcessID:(id)arg1 ;
-(void)addUUID:(id)arg1 ;
-(BOOL)containsProcessLookupSubstr:(id)arg1 ;
-(BOOL)containsProcessID:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 collection:(id)arg2 ;
-(void)addSubsystem:(id)arg1 ;
-(BOOL)containsUUID:(id)arg1 ;
-(void)visitPredicate:(id)arg1 ;
-(void)readDSCUUIDs;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(void)addSenderLookupSubstr:(id)arg1 ;
-(BOOL)isKeptCatalog:(catalog_s*)arg1 ;
-(void)processLeftExpression:(id)arg1 andRightExpression:(id)arg2 ;
-(void)readDSOUUIDs;
-(void)handleDSCContents:(uuiddb_dsc_map_s*)arg1 ;
-(uuiddb_dsc_map_s*)getDSCMap;
-(BOOL)containsSubsystemSubstr:(id)arg1 ;
-(void)processComparisonPredicate:(id)arg1 ;
-(BOOL)containsSenderLookupSubstr:(id)arg1 ;
-(void)handleDSOFile:(ftsent*)arg1 ;
-(void)addProcessLookupSubstr:(id)arg1 ;
-(void)generateUUIDSet;
-(void)dealloc;
@end

