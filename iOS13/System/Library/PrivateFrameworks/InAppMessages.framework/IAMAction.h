/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

#import <InAppMessages/InAppMessages-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDictionary;

@interface IAMAction : NSObject <NSCopying> {

	BOOL _requiresDelegate;
	NSString* _identifier;
	NSString* _displayText;
	NSURL* _url;
	NSDictionary* _actionParameters;

}

@property (nonatomic,copy,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayText;                  //@synthesize displayText=_displayText - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL requiresDelegate;                        //@synthesize requiresDelegate=_requiresDelegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionParameters;              //@synthesize actionParameters=_actionParameters - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSURL *)url;
-(NSString *)displayText;
-(NSDictionary *)actionParameters;
-(BOOL)requiresDelegate;
-(id)initWithICAction:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 displayText:(id)arg2 url:(id)arg3 requiresDelegate:(BOOL)arg4 actionParameters:(id)arg5 ;
@end

