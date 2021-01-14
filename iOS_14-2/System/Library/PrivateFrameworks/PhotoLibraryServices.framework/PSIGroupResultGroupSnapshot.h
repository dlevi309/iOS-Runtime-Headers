/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)tokens;
-(void)addToken:(id)arg1 ;
-(id)initWithDateFilter:(id)arg1 datedTokens:(id)arg2 ;
-(NSArray *)matchRanges;
-(unsigned long long)groupId;
-(void)addMatchRange:(id)arg1 ;
-(id)initWithGroup:(id)arg1 token:(id)arg2 ;
-(NSString *)contentString;
-(NSString *)normalizedString;
-(NSString *)lookupIdentifier;
-(id)initWithContentString:(id)arg1 lookupIdentifier:(id)arg2 category:(short)arg3 ;
-(BOOL)isDateFilterFromFullSearchText;
-(id)initWithContentString:(id)arg1 normalizedString:(id)arg2 token:(id)arg3 category:(short)arg4 lookupIdentifier:(id)arg5 dateFilter:(id)arg6 groupId:(unsigned long long)arg7 owningGroupId:(unsigned long long)arg8 groupRanges:(id)arg9 datedTokens:(id)arg10 ;
-(BOOL)isDateFilterFromImplicitToken;
-(short)category;
-(NSArray *)groupRanges;
-(BOOL)isDateFilterPartiallyFromFullSearchText;
-(NSArray *)datedTokens;
-(unsigned long long)owningGroupId;
-(PSIDateFilter *)dateFilter;
@end

