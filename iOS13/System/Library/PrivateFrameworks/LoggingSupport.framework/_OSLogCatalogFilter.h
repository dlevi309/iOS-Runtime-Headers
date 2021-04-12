/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(void)addProcessID:(id)arg1 ;
-(BOOL)isKeptCatalog:(catalog_s*)arg1 ;
-(void)processComparisonPredicate:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 collection:(id)arg2 ;
-(BOOL)containsProcessID:(id)arg1 ;
-(void)addSubsystem:(id)arg1 ;
-(BOOL)containsSubsystemSubstr:(id)arg1 ;
-(void)addUUID:(id)arg1 ;
-(BOOL)containsUUID:(id)arg1 ;
-(void)addProcessLookupSubstr:(id)arg1 ;
-(void)addSenderLookupSubstr:(id)arg1 ;
-(BOOL)containsProcessLookupSubstr:(id)arg1 ;
-(BOOL)containsSenderLookupSubstr:(id)arg1 ;
-(void)generateUUIDSet;
-(void)readDSOUUIDs;
-(void)handleDSOFile:(ftsent*)arg1 ;
-(void)readDSCUUIDs;
-(uuiddb_dsc_map_s*)getDSCMap;
-(void)handleDSCContents:(uuiddb_dsc_map_s*)arg1 ;
-(void)processLeftExpression:(id)arg1 andRightExpression:(id)arg2 ;
@end

