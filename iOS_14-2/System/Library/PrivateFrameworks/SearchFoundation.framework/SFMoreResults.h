/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)jsonData;
-(void)setLabel:(id)arg1;
-(NSString *)label;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface SFMoreResults : NSObject <SFMoreResults, NSSecureCoding, NSCopying> {

	NSString* _label;

}

@property (nonatomic,copy) NSString * label;                                         //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(void)loadSearchResultsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadSearchResultsWithCompletionAndErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
@end

