/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@class NSSet;

@interface CHTokenizedStrokeResult : NSObject {

	long long _resultLevel;
	NSSet* _strokeIdentifiers;

}

@property (nonatomic,readonly) long long resultLevel;                       //@synthesize resultLevel=_resultLevel - In the implementation block
@property (nonatomic,copy,readonly) NSSet * strokeIdentifiers;              //@synthesize strokeIdentifiers=_strokeIdentifiers - In the implementation block
-(void)dealloc;
-(NSSet *)strokeIdentifiers;
-(long long)resultLevel;
-(id)initWithStrokeIdentifiers:(id)arg1 resultLevel:(long long)arg2 ;
@end

