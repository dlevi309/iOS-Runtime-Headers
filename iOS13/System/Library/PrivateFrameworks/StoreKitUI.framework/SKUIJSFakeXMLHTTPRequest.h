/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSFakeXMLHTTPRequest.h>
@class NSDictionary, NSString, IKJSXMLDocument;


@protocol SKUIJSFakeXMLHTTPRequest <JSExport>
@property (readonly) NSDictionary * metrics; 
@property (readonly) unsigned readyState; 
@property (readonly) id response; 
@property (readonly) NSString * responseText; 
@property (readonly) unsigned responseType; 
@property (readonly) IKJSXMLDocument * responseXML; 
@property (readonly) unsigned status; 
@property (retain,readonly) NSString * statusText; 
@required
-(unsigned)status;
-(NSDictionary *)metrics;
-(id)response;
-(unsigned)responseType;
-(unsigned)readyState;
-(NSString *)statusText;
-(NSString *)responseText;
-(IKJSXMLDocument *)responseXML;
-(id)getResponseHeader:(id)arg1;
-(id)getAllResponseHeaders;

@end


@class NSDictionary, NSString, IKJSXMLDocument, NSData, NSHTTPURLResponse;

@interface SKUIJSFakeXMLHTTPRequest : IKJSObject <SKUIJSFakeXMLHTTPRequest> {

	NSData* _data;
	NSDictionary* _performanceMetrics;
	NSHTTPURLResponse* _response;

}

@property (readonly) NSDictionary * metrics; 
@property (readonly) unsigned readyState; 
@property (readonly) id response; 
@property (readonly) NSString * responseText; 
@property (readonly) unsigned responseType; 
@property (readonly) IKJSXMLDocument * responseXML; 
@property (readonly) unsigned status; 
@property (retain,readonly) NSString * statusText; 
-(unsigned)status;
-(NSDictionary *)metrics;
-(id)response;
-(unsigned)responseType;
-(unsigned)readyState;
-(NSString *)statusText;
-(NSString *)responseText;
-(IKJSXMLDocument *)responseXML;
-(id)getResponseHeader:(id)arg1 ;
-(id)getAllResponseHeaders;
-(id)initWithAppContext:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4 ;
@end

