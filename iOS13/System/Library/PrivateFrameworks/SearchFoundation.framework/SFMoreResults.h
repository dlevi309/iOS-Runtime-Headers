/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFMoreResults.h>
@class NSString, NSDictionary, NSData;


@protocol SFMoreResults <NSObject>
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setLabel:(id)arg1;
-(NSString *)label;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface SFMoreResults : NSObject <SFMoreResults, NSSecureCoding, NSCopying> {

	NSString* _label;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * label;                                         //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(void)loadSearchResultsWithCompletionAndErrorHandler:(/*^block*/id)arg1 ;
-(void)loadSearchResultsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

