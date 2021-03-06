/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class RETrainingSimulator;

@interface REHTTPDebugCoordinator : NSObject {

	RETrainingSimulator* _simulator;

}
-(id)initWithSimulator:(id)arg1 ;
-(id)_stringElementForObject:(id)arg1 ;
-(id)_urlFromPaths:(id)arg1 ;
-(id)_stringForObject:(id)arg1 ;
-(id)_createHTMLTableFromDictionary:(id)arg1 ;
-(id)_linkToPaths:(id)arg1 ;
-(id)_linkElementForTableItem:(id)arg1 paths:(id)arg2 ;
-(id)_createTableWithItems:(id)arg1 itemFormatBlock:(/*^block*/id)arg2 valueBlock:(/*^block*/id)arg3 ;
-(id)_createContentItemWithTitle:(id)arg1 content:(id)arg2 ;
-(id)_createHTMLTableRowFromArray:(id)arg1 itemElementTag:(id)arg2 ;
-(void)generateDiagnosticsForPaths:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

