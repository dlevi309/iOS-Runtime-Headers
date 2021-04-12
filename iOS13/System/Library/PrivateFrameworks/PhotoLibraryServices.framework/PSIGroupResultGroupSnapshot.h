/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableArray, NSString, NSArray, PSIDateFilter;

@interface PSIGroupResultGroupSnapshot : NSObject {

	NSMutableArray* _tokens;
	NSMutableArray* _matchRanges;
	short _category;
	NSString* _contentString;
	NSString* _normalizedString;
	NSString* _lookupIdentifier;
	NSArray* _groupRanges;
	PSIDateFilter* _dateFilter;
	NSArray* _datedTokens;
	unsigned long long _groupId;
	unsigned long long _owningGroupId;

}

@property (nonatomic,copy,readonly) NSString * contentString;                 //@synthesize contentString=_contentString - In the implementation block
@property (nonatomic,copy,readonly) NSString * normalizedString;              //@synthesize normalizedString=_normalizedString - In the implementation block
@property (nonatomic,copy,readonly) NSString * lookupIdentifier;              //@synthesize lookupIdentifier=_lookupIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * tokens;                              //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,readonly) NSArray * matchRanges;                         //@synthesize matchRanges=_matchRanges - In the implementation block
@property (nonatomic,readonly) NSArray * groupRanges;                         //@synthesize groupRanges=_groupRanges - In the implementation block
@property (nonatomic,copy,readonly) PSIDateFilter * dateFilter;               //@synthesize dateFilter=_dateFilter - In the implementation block
@property (nonatomic,readonly) NSArray * datedTokens;                         //@synthesize datedTokens=_datedTokens - In the implementation block
@property (nonatomic,readonly) short category;                                //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned long long groupId;                    //@synthesize groupId=_groupId - In the implementation block
@property (nonatomic,readonly) unsigned long long owningGroupId;              //@synthesize owningGroupId=_owningGroupId - In the implementation block
-(short)category;
-(NSArray *)tokens;
-(unsigned long long)groupId;
-(NSString *)contentString;
-(PSIDateFilter *)dateFilter;
-(unsigned long long)owningGroupId;
-(NSString *)normalizedString;
-(NSString *)lookupIdentifier;
-(NSArray *)datedTokens;
-(NSArray *)matchRanges;
-(id)initWithContentString:(id)arg1 lookupIdentifier:(id)arg2 category:(short)arg3 ;
-(NSArray *)groupRanges;
-(BOOL)isDateFilterPartiallyFromFullSearchText;
-(id)initWithDateFilter:(id)arg1 datedTokens:(id)arg2 ;
-(void)addToken:(id)arg1 ;
-(void)addMatchRange:(id)arg1 ;
-(id)initWithGroup:(id)arg1 token:(id)arg2 ;
-(id)initWithContentString:(id)arg1 normalizedString:(id)arg2 token:(id)arg3 category:(short)arg4 lookupIdentifier:(id)arg5 dateFilter:(id)arg6 groupId:(unsigned long long)arg7 owningGroupId:(unsigned long long)arg8 groupRanges:(id)arg9 datedTokens:(id)arg10 ;
-(BOOL)isDateFilterFromFullSearchText;
-(BOOL)isDateFilterFromImplicitToken;
@end

