/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString;

@interface PLSqliteQueryPlanNode : NSObject {

	int _identifier;
	int _parentIdentifier;
	int _unused;
	NSString* _nodeDescription;

}

@property (readonly) int identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (readonly) int parentIdentifier;                         //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (readonly) int unused;                                   //@synthesize unused=_unused - In the implementation block
@property (copy,readonly) NSString * nodeDescription;              //@synthesize nodeDescription=_nodeDescription - In the implementation block
-(int)unused;
-(int)parentIdentifier;
-(int)identifier;
-(id)initWithIdentifier:(int)arg1 parentIdentifier:(int)arg2 unused:(int)arg3 nodeDescription:(id)arg4 ;
-(NSString *)nodeDescription;
@end

