/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString;

@interface _PLDescriptionStyle : NSObject {

	BOOL _prettyPrint;
	NSString* _initialFieldSeparator;
	NSString* _fieldSeparator;
	NSString* _nameValueSeparator;
	NSString* _suffix;
	long long _extraIndent;

}

@property (copy,readonly) NSString * initialFieldSeparator;              //@synthesize initialFieldSeparator=_initialFieldSeparator - In the implementation block
@property (copy,readonly) NSString * fieldSeparator;                     //@synthesize fieldSeparator=_fieldSeparator - In the implementation block
@property (copy,readonly) NSString * nameValueSeparator;                 //@synthesize nameValueSeparator=_nameValueSeparator - In the implementation block
@property (copy,readonly) NSString * suffix;                             //@synthesize suffix=_suffix - In the implementation block
@property (readonly) long long extraIndent;                              //@synthesize extraIndent=_extraIndent - In the implementation block
@property (readonly) BOOL prettyPrint;                                   //@synthesize prettyPrint=_prettyPrint - In the implementation block
+(id)styleForEnum:(long long)arg1 ;
-(NSString *)suffix;
-(id)initWithIntialFieldSeparator:(id)arg1 fieldSeparator:(id)arg2 nameValueSeparator:(id)arg3 suffix:(id)arg4 extraIndent:(long long)arg5 prettyPrint:(BOOL)arg6 ;
-(id)descriptionForObject:(id)arg1 withIndent:(long long)arg2 ;
-(NSString *)initialFieldSeparator;
-(NSString *)fieldSeparator;
-(NSString *)nameValueSeparator;
-(long long)extraIndent;
-(BOOL)prettyPrint;
@end

