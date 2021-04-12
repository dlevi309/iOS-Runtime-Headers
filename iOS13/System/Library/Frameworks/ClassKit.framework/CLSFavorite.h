/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>

@class NSString, NSArray, NSURL;

@interface CLSFavorite : CLSObject {

	NSString* _title;
	NSString* _storeIdentifier;
	int _type;
	NSArray* _contextIdentifierPath;
	NSString* _contextSummary;
	NSString* _contextCustomTypeName;
	NSURL* _URL;
	long long _contextType;
	NSString* _bundleIdentifier;
	NSString* _contentStoreIdentifier;

}

@property (nonatomic,retain) NSArray * contextIdentifierPath;               //@synthesize contextIdentifierPath=_contextIdentifierPath - In the implementation block
@property (nonatomic,retain) NSString * contextSummary;                     //@synthesize contextSummary=_contextSummary - In the implementation block
@property (nonatomic,retain) NSString * contextCustomTypeName;              //@synthesize contextCustomTypeName=_contextCustomTypeName - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) int type;                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long contextType;                         //@synthesize contextType=_contextType - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier; 
@property (nonatomic,copy) NSString * contentStoreIdentifier;               //@synthesize contentStoreIdentifier=_contentStoreIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * bundleIdentifier;                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)dictionaryRepresentation;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(long long)contextType;
-(void)setContextType:(long long)arg1 ;
-(NSString *)storeIdentifier;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(BOOL)validateObject:(id*)arg1 ;
-(NSArray *)contextIdentifierPath;
-(NSString *)contentStoreIdentifier;
-(id)initWithTitle:(id)arg1 contextIdentifierPath:(id)arg2 URL:(id)arg3 type:(int)arg4 contextType:(long long)arg5 andBundleIdentifier:(id)arg6 contentStoreIdentifier:(id)arg7 contextSummary:(id)arg8 contextCustomTypeName:(id)arg9 ;
-(id)initWithTitle:(id)arg1 context:(id)arg2 ;
-(id)initWithTitle:(id)arg1 URL:(id)arg2 andBundleIdentifier:(id)arg3 ;
-(void)setContextIdentifierPath:(NSArray *)arg1 ;
-(NSString *)contextSummary;
-(void)setContextSummary:(NSString *)arg1 ;
-(NSString *)contextCustomTypeName;
-(void)setContextCustomTypeName:(NSString *)arg1 ;
-(void)setContentStoreIdentifier:(NSString *)arg1 ;
@end

