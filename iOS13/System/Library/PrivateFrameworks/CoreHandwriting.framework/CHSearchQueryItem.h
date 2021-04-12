/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@class NSSet;

@interface CHSearchQueryItem : NSObject {

	NSSet* _strokeIdentifiers;

}

@property (nonatomic,copy,readonly) NSSet * strokeIdentifiers;              //@synthesize strokeIdentifiers=_strokeIdentifiers - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSSet *)strokeIdentifiers;
-(id)initWithStrokeIdentifiers:(id)arg1 ;
-(BOOL)isEqualToSearchQueryItem:(id)arg1 ;
@end

