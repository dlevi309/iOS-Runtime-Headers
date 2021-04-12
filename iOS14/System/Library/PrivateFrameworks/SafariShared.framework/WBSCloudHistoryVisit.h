/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WBSHistoryVisitIdentifier, NSString, NSDictionary;

@interface WBSCloudHistoryVisit : NSObject <NSSecureCoding> {

	BOOL _loadSuccessful;
	BOOL _httpNonGet;
	WBSHistoryVisitIdentifier* _visitIdentifier;
	NSString* _title;
	WBSHistoryVisitIdentifier* _redirectSourceVisitIdentifier;
	WBSCloudHistoryVisit* _redirectSourceVisit;
	WBSHistoryVisitIdentifier* _redirectDestinationVisitIdentifier;
	WBSCloudHistoryVisit* _redirectDestinationVisit;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,copy) WBSHistoryVisitIdentifier * visitIdentifier;                                 //@synthesize visitIdentifier=_visitIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                                            //@synthesize title=_title - In the implementation block
@property (assign,getter=loadWasSuccessful,nonatomic) BOOL loadSuccessful;                              //@synthesize loadSuccessful=_loadSuccessful - In the implementation block
@property (assign,getter=wasHTTPNonGet,nonatomic) BOOL httpNonGet;                                      //@synthesize httpNonGet=_httpNonGet - In the implementation block
@property (nonatomic,copy) WBSHistoryVisitIdentifier * redirectSourceVisitIdentifier;                   //@synthesize redirectSourceVisitIdentifier=_redirectSourceVisitIdentifier - In the implementation block
@property (assign,nonatomic,__weak) WBSCloudHistoryVisit * redirectSourceVisit;                         //@synthesize redirectSourceVisit=_redirectSourceVisit - In the implementation block
@property (nonatomic,copy) WBSHistoryVisitIdentifier * redirectDestinationVisitIdentifier;              //@synthesize redirectDestinationVisitIdentifier=_redirectDestinationVisitIdentifier - In the implementation block
@property (assign,nonatomic,__weak) WBSCloudHistoryVisit * redirectDestinationVisit;                    //@synthesize redirectDestinationVisit=_redirectDestinationVisit - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(void)setLoadSuccessful:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(WBSHistoryVisitIdentifier *)visitIdentifier;
-(void)setRedirectSourceVisit:(WBSCloudHistoryVisit *)arg1 ;
-(WBSHistoryVisitIdentifier *)redirectSourceVisitIdentifier;
-(void)setRedirectDestinationVisit:(WBSCloudHistoryVisit *)arg1 ;
-(WBSCloudHistoryVisit *)redirectSourceVisit;
-(WBSCloudHistoryVisit *)redirectDestinationVisit;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithHistoryVisit:(id)arg1 ;
-(id)initWithVisitIdentifier:(id)arg1 title:(id)arg2 loadSuccessful:(BOOL)arg3 httpNonGet:(BOOL)arg4 redirectSourceVisitIdentifier:(id)arg5 redirectDestinationVisitIdentifier:(id)arg6 ;
-(void)setVisitIdentifier:(WBSHistoryVisitIdentifier *)arg1 ;
-(void)setHttpNonGet:(BOOL)arg1 ;
-(void)setRedirectSourceVisitIdentifier:(WBSHistoryVisitIdentifier *)arg1 ;
-(WBSHistoryVisitIdentifier *)redirectDestinationVisitIdentifier;
-(void)setRedirectDestinationVisitIdentifier:(WBSHistoryVisitIdentifier *)arg1 ;
-(BOOL)wasHTTPNonGet;
-(BOOL)loadWasSuccessful;
-(NSString *)title;
@end

