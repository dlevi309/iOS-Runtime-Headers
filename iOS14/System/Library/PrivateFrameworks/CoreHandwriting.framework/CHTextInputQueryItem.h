/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@class NSNumber, NSArray, CHTextCorrectionResult;

@interface CHTextInputQueryItem : NSObject {

	NSNumber* _itemIdentifier;
	NSNumber* _itemStableIdentifier;
	NSArray* _strokeIdentifiers;
	CHTextCorrectionResult* _correctionResult;

}

@property (nonatomic,readonly) NSNumber * itemIdentifier;                              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * itemStableIdentifier;                        //@synthesize itemStableIdentifier=_itemStableIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * strokeIdentifiers;                       //@synthesize strokeIdentifiers=_strokeIdentifiers - In the implementation block
@property (nonatomic,readonly) CHTextCorrectionResult * correctionResult;              //@synthesize correctionResult=_correctionResult - In the implementation block
-(NSNumber *)itemIdentifier;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSArray *)strokeIdentifiers;
-(NSNumber *)itemStableIdentifier;
-(CHTextCorrectionResult *)correctionResult;
-(id)initWithIdentifier:(id)arg1 stableIdentifier:(id)arg2 strokeIdentifiers:(id)arg3 correctionResult:(id)arg4 ;
-(BOOL)isEqualToTextInputQueryItem:(id)arg1 ;
@end

