/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableArray, NSRegularExpression, NSString;

@interface PLSqliteQueryPlan : NSObject {

	NSMutableArray* _nodes;
	NSRegularExpression* _stringRepresentationRegex;

}

@property (copy,readonly) NSString * graphDescription; 
@property (copy,readonly) NSString * listDescription; 
-(id)init;
-(NSString *)graphDescription;
-(id)_stringRepresentationRegex;
-(void)addNodeWithIdentifier:(int)arg1 parentIdentifier:(int)arg2 unused:(int)arg3 nodeDescription:(id)arg4 ;
-(void)addNodeWithStringRepresentation:(id)arg1 ;
-(NSString *)listDescription;
-(void)_renderLevelWithParentIdentifier:(int)arg1 prefix:(id)arg2 intoLines:(id)arg3 ;
@end

