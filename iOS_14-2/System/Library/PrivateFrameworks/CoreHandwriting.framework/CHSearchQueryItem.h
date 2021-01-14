/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@class NSSet;

@interface CHSearchQueryItem : NSObject {

	NSSet* _strokeIdentifiers;

}

@property (nonatomic,copy,readonly) NSSet * strokeIdentifiers;              //@synthesize strokeIdentifiers=_strokeIdentifiers - In the implementation block
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSSet *)strokeIdentifiers;
-(id)initWithStrokeIdentifiers:(id)arg1 ;
-(BOOL)isEqualToSearchQueryItem:(id)arg1 ;
@end

