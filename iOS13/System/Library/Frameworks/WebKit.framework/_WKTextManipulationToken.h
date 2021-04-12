/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


@class NSString;

@interface _WKTextManipulationToken : NSObject {

	BOOL _excluded;
	NSString* _identifier;
	NSString* _content;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * content;                                //@synthesize content=_content - In the implementation block
@property (assign,getter=isExcluded,nonatomic) BOOL excluded;                 //@synthesize excluded=_excluded - In the implementation block
@property (nonatomic,copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)debugDescription;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)content;
-(void)setContent:(NSString *)arg1 ;
-(void)setExcluded:(BOOL)arg1 ;
-(BOOL)isEqualToTextManipulationToken:(id)arg1 includingContentEquality:(BOOL)arg2 ;
-(id)_descriptionPreservingPrivacy:(BOOL)arg1 ;
-(BOOL)isExcluded;
@end

