/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@class NSNumber, NSArray, NSLocale, NSDictionary;

@interface CHStrokeGroupQueryItem : NSObject {

	NSNumber* _strokeGroupIdentifier;
	NSNumber* _strokeGroupStableIdentifier;
	NSArray* _strokeIdentifiers;
	long long _strokeGroupType;
	NSLocale* _preferredLocale;
	NSDictionary* __tokenizedTextResultsByLocale;
	NSDictionary* __errorsByLocale;

}

@property (nonatomic,copy,readonly) NSDictionary * _tokenizedTextResultsByLocale;              //@synthesize _tokenizedTextResultsByLocale=__tokenizedTextResultsByLocale - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * _errorsByLocale;                            //@synthesize _errorsByLocale=__errorsByLocale - In the implementation block
@property (nonatomic,readonly) NSNumber * strokeGroupIdentifier;                               //@synthesize strokeGroupIdentifier=_strokeGroupIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * strokeGroupStableIdentifier;                         //@synthesize strokeGroupStableIdentifier=_strokeGroupStableIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * strokeIdentifiers;                               //@synthesize strokeIdentifiers=_strokeIdentifiers - In the implementation block
@property (nonatomic,readonly) long long strokeGroupType;                                      //@synthesize strokeGroupType=_strokeGroupType - In the implementation block
@property (nonatomic,copy,readonly) NSLocale * preferredLocale;                                //@synthesize preferredLocale=_preferredLocale - In the implementation block
+(id)descriptionForStrokeGroupQueryItemType:(long long)arg1 ;
-(id)description;
-(NSLocale *)preferredLocale;
-(void)dealloc;
-(long long)strokeGroupType;
-(NSArray *)strokeIdentifiers;
-(id)initWithStrokeGroupIdentifier:(id)arg1 stableIdentifier:(id)arg2 strokeIdentifiers:(id)arg3 type:(long long)arg4 preferredLocale:(id)arg5 tokenizedTextResultsByLocale:(id)arg6 errorsByLocale:(id)arg7 ;
-(NSNumber *)strokeGroupIdentifier;
-(NSDictionary *)_tokenizedTextResultsByLocale;
-(NSDictionary *)_errorsByLocale;
-(id)textRecognitionResultForLocale:(id)arg1 error:(id*)arg2 ;
-(NSNumber *)strokeGroupStableIdentifier;
@end

